#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGEDKNLBCAN;
namespace System { class Object; }

#define LGEDKNLBCAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F140)
#define LGEDKNLBCAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6F180)
#define LGEDKNLBCAN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1FC6F190)

inline static constexpr unsigned int LGEDKNLBCAN___c_TypeDefinitionIndex = 28167;

	class LGEDKNLBCAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C_CTOR_OFFSET))(this);
		}

		::LGEDKNLBCAN* __cctor_b__68_0()
		{
			return ((::LGEDKNLBCAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEDKNLBCAN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
