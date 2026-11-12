#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GNJBNBIOLAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16A956D0)
#define GNJBNBIOLAJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x16A95750)
#define GNJBNBIOLAJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0x16A957D0)
#define GNJBNBIOLAJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x16A957E0)

inline static constexpr unsigned int GNJBNBIOLAJ_TypeDefinitionIndex = 63505;

	class GNJBNBIOLAJ : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* PBJAENMIKEJ; // 0x18
		::System::Int16 AIKAPJELHNK; // 0x20
		::System::Void _ctor(::System::String* a1, ::System::Int16 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int16))((::PBYTE)hIl2Cpp + GNJBNBIOLAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJBNBIOLAJ_GET_NAME_OFFSET))(this);
		}

		::System::Int16 MNLDMBGAJIF()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + GNJBNBIOLAJ_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Int16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + GNJBNBIOLAJ_DKDLBLLMPNE_OFFSET))(this, a1);
		}

	};
