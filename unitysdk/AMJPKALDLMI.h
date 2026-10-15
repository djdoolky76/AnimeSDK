#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJPKALDLMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15584870)
#define AMJPKALDLMI_GOBLKKJBMHK_OFFSET UNITYSDK_OFFSET(0x15583CB0)
#define AMJPKALDLMI_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15583C10)

inline static constexpr unsigned int AMJPKALDLMI_TypeDefinitionIndex = 53729;

	class AMJPKALDLMI : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* FDHOAEDHKCH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPKALDLMI_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPKALDLMI_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void GOBLKKJBMHK(::System::String* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + AMJPKALDLMI_GOBLKKJBMHK_OFFSET))(this, a1, a2);
		}

	};
