#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOJJOCIOOA_IBLPPDONBKE.h"
#include "unitysdk/OAOJJOCIOOA_LeaseKind.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
class OAOJJOCIOOA;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define OAOJJOCIOOA_EPJFGPHAFAC_CTOR_OFFSET UNITYSDK_OFFSET(0xC62EA60)
#define OAOJJOCIOOA_EPJFGPHAFAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC6326B0)
#define OAOJJOCIOOA_EPJFGPHAFAC_GLCBMGMGGDL_OFFSET UNITYSDK_OFFSET(0xC6324C0)
#define OAOJJOCIOOA_EPJFGPHAFAC_IIGGDELDPMK_OFFSET UNITYSDK_OFFSET(0xC632640)
#define OAOJJOCIOOA_EPJFGPHAFAC_KEPACPGNDFB_OFFSET UNITYSDK_OFFSET(0xC632510)

inline static constexpr unsigned int OAOJJOCIOOA_EPJFGPHAFAC_TypeDefinitionIndex = 61932;

	class OAOJJOCIOOA_EPJFGPHAFAC : public ::System::Object
	{
	public:
		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* GNMEKCEHDFJ; // 0x10
		::System::String* NKCNGCHLNEI; // 0x18
		::OAOJJOCIOOA_IBLPPDONBKE LPOAFLCPHKB; // 0x20
		::OAOJJOCIOOA* KFPAHLICBEI; // 0x30
		::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* JODJMBKCLDG; // 0x38
		::System::Boolean ODGGMJLABGJ; // 0x40
		::System::Byte _padding0[0x3];
		::OAOJJOCIOOA_LeaseKind CMAOAKMIMLA; // 0x44
		::System::Int64 HNIEOFLBFOP; // 0x48
		::System::Void _ctor(::OAOJJOCIOOA* a1, ::OAOJJOCIOOA_LeaseKind a2, ::System::Int64 a3, ::System::String* a4, ::OAOJJOCIOOA_IBLPPDONBKE a5, ::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* a6)
		{
			return ((::System::Void(*)(::PVOID, ::OAOJJOCIOOA*, ::OAOJJOCIOOA_LeaseKind, ::System::Int64, ::System::String*, ::OAOJJOCIOOA_IBLPPDONBKE, ::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Boolean GLCBMGMGGDL(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC_GLCBMGMGGDL_OFFSET))(this, a1);
		}

		::System::Boolean IIGGDELDPMK(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC_IIGGDELDPMK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean KEPACPGNDFB(::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>* a1, ::RPG::Client::LittleGameSandboxCompletionResult a2)
		{
			return ((::System::Boolean(*)(::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>*, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC_KEPACPGNDFB_OFFSET))(a1, a2);
		}

	};
