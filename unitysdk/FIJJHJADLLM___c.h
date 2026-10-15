#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIJJHJADLLM;
namespace System { class Object; }

#define FIJJHJADLLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E399E40)
#define FIJJHJADLLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E399E80)
#define FIJJHJADLLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E399E90)

inline static constexpr unsigned int FIJJHJADLLM___c_TypeDefinitionIndex = 28822;

	class FIJJHJADLLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x601A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FIJJHJADLLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM___C_CTOR_OFFSET))(this);
		}

		::FIJJHJADLLM* __cctor_b__28_0()
		{
			return ((::FIJJHJADLLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIJJHJADLLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
