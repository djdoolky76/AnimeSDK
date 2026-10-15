#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
class CMJBLLIHDKP;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AMJPKALDLMI_CCMCNDFJHKJ_AOOALODBCEC_OFFSET UNITYSDK_OFFSET(0x15583F20)
#define AMJPKALDLMI_CCMCNDFJHKJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x155848C0)
#define AMJPKALDLMI_CCMCNDFJHKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15584920)

	class AMJPKALDLMI_CCMCNDFJHKJ : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* LDNHOKKHOCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPKALDLMI_CCMCNDFJHKJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJPKALDLMI_CCMCNDFJHKJ_CLEAR_OFFSET))(this);
		}

		::System::Void AOOALODBCEC(::CMJBLLIHDKP* a1, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CMJBLLIHDKP*, ::Il2CppArray<::RPG::GameCore::RtPropertyModifyData>*))((::PBYTE)hIl2Cpp + AMJPKALDLMI_CCMCNDFJHKJ_AOOALODBCEC_OFFSET))(this, a1, a2);
		}

	};
