#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define BDKPAAFBMHI_CTOR_OFFSET UNITYSDK_OFFSET(0x162F1230)
#define BDKPAAFBMHI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x162F10E0)
#define BDKPAAFBMHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x162F1130)

inline static constexpr unsigned int BDKPAAFBMHI_TypeDefinitionIndex = 68289;

	class BDKPAAFBMHI : public ::System::Object
	{
	public:
		::System::UInt32 FDAKECLCKGP; // 0x10
		::System::Boolean DKBNNGMAIFO; // 0x14
		::System::Boolean KKKIONIDKFA; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKPAAFBMHI_CTOR_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKPAAFBMHI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDKPAAFBMHI_TOSTRING_OFFSET))(this);
		}

	};
