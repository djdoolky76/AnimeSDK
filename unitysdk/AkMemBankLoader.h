#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/FBADA98F49F82B7B.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace B81252A784389775 { class AE65CC9A7178B161; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define AKMEMBANKLOADER_A060D0DB7750EA0B_OFFSET UNITYSDK_OFFSET(0x291A920)
#define AKMEMBANKLOADER_A2AA95D021DDFF55_OFFSET UNITYSDK_OFFSET(0x291A830)
#define AKMEMBANKLOADER_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x291AB00)
#define AKMEMBANKLOADER_BD9A82C0C21DC8C8_OFFSET UNITYSDK_OFFSET(0x291AA30)
#define AKMEMBANKLOADER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x291AB90)
#define AKMEMBANKLOADER_F529ED1C69C4DD1D_OFFSET UNITYSDK_OFFSET(0x291A8B0)
#define AKMEMBANKLOADER_FB51882086BB3734_OFFSET UNITYSDK_OFFSET(0x291A680)
#define AKMEMBANKLOADER__CTOR_OFFSET UNITYSDK_OFFSET(0x291AD60)

inline static constexpr unsigned int AkMemBankLoader_TypeDefinitionIndex = 20432;

class AkMemBankLoader : public ::UnityEngine::MonoBehaviour
{
public:
	::System::String* bankName; // 0x20
	::System::Boolean isLocalizedBank; // 0x28
	::System::Byte _padding0[0x7];
	::System::String* FA888C5C8BC9B8CF; // 0x30
	::System::UInt32 ms_bankID; // 0x38
	::System::Byte _padding1[0x4];
	::System::IntPtr E27B113A47F56748; // 0x40
	::System::Runtime::InteropServices::FBADA98F49F82B7B F981A8940EFBE1BE; // 0x48
	::B81252A784389775::AE65CC9A7178B161* B088FC19C70BCE29; // 0x50

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void BD9A82C0C21DC8C8(::System::String* B02C3545565920E1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_BD9A82C0C21DC8C8_OFFSET))(this, B02C3545565920E1);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER__CTOR_OFFSET))(this);
	}

	::System::Void A060D0DB7750EA0B(::System::String* B02C3545565920E1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_A060D0DB7750EA0B_OFFSET))(this, B02C3545565920E1);
	}

	::System::UInt32 FB51882086BB3734(::Il2CppArray<::System::Byte>* F220A2D27F7C6B6C)
	{
		return ((::System::UInt32(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_FB51882086BB3734_OFFSET))(this, F220A2D27F7C6B6C);
	}

	::System::Collections::IEnumerator* F529ED1C69C4DD1D()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_F529ED1C69C4DD1D_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void A2AA95D021DDFF55(::System::String* A0D1031D0E7CC968)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMEMBANKLOADER_A2AA95D021DDFF55_OFFSET))(this, A0D1031D0E7CC968);
	}
};
