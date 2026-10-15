#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define GNJBNBIOLAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15B12710)
#define GNJBNBIOLAJ_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x15B12790)
#define GNJBNBIOLAJ_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B12810)
#define GNJBNBIOLAJ_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x15B12820)

inline static constexpr unsigned int GNJBNBIOLAJ_TypeDefinitionIndex = 62092;

	class GNJBNBIOLAJ : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::System::Action* PBJAENMIKEJ; // 0x18
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
