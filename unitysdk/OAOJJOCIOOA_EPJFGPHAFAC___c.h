#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

#define OAOJJOCIOOA_EPJFGPHAFAC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB6E7E0)
#define OAOJJOCIOOA_EPJFGPHAFAC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1AB6E820)
#define OAOJJOCIOOA_EPJFGPHAFAC___C__DISPOSE_B__11_0_OFFSET UNITYSDK_OFFSET(0x1AB6E830)

inline static constexpr unsigned int OAOJJOCIOOA_EPJFGPHAFAC___c_TypeDefinitionIndex = 61933;

	class OAOJJOCIOOA_EPJFGPHAFAC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66760);
		}

		static ::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>** StaticGet___9__11_0()
		{
			return (::System::Func_1<::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66768);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC___C_CTOR_OFFSET))(this);
		}

		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> _Dispose_b__11_0()
		{
			return ((::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult>(*)(::PVOID))((::PBYTE)hIl2Cpp + OAOJJOCIOOA_EPJFGPHAFAC___C__DISPOSE_B__11_0_OFFSET))(this);
		}

	};
