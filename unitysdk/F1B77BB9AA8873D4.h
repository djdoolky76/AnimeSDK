#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AD61077CFCBEFAEA.h"

namespace System { class String; }
namespace TMPro { class TextMeshProUGUI; }

#define F1B77BB9AA8873D4_AD7FCA650E56631F_1_OFFSET UNITYSDK_OFFSET(0x1F3B3D0)
#define F1B77BB9AA8873D4_AD7FCA650E56631F_OFFSET UNITYSDK_OFFSET(0x1F3B250)

inline static constexpr unsigned int F1B77BB9AA8873D4_TypeDefinitionIndex = 7624;

class F1B77BB9AA8873D4 : public ::System::Object
{
public:
	static ::System::Void AD7FCA650E56631F(::TMPro::TextMeshProUGUI* A4A61A7BC96D938B, ::AD61077CFCBEFAEA E0C0689B1CEBE48C, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::TMPro::TextMeshProUGUI*, ::AD61077CFCBEFAEA, ::System::Boolean))((::PBYTE)hIl2Cpp + F1B77BB9AA8873D4_AD7FCA650E56631F_OFFSET))(A4A61A7BC96D938B, E0C0689B1CEBE48C, F7C511FBCE59B4A5);
	}

	static ::System::Void AD7FCA650E56631F_1(::TMPro::TextMeshProUGUI* A4A61A7BC96D938B, ::System::String* E0C0689B1CEBE48C, ::System::Boolean F7C511FBCE59B4A5)
	{
		return ((::System::Void(*)(::TMPro::TextMeshProUGUI*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + F1B77BB9AA8873D4_AD7FCA650E56631F_1_OFFSET))(A4A61A7BC96D938B, E0C0689B1CEBE48C, F7C511FBCE59B4A5);
	}
};
