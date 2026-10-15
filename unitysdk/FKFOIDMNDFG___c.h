#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKFOIDMNDFG;
namespace System { class Object; }

#define FKFOIDMNDFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF250)
#define FKFOIDMNDFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3AF290)
#define FKFOIDMNDFG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E3AF2A0)

inline static constexpr unsigned int FKFOIDMNDFG___c_TypeDefinitionIndex = 33524;

	class FKFOIDMNDFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FKFOIDMNDFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFOIDMNDFG___C_CTOR_OFFSET))(this);
		}

		::FKFOIDMNDFG* __cctor_b__33_0()
		{
			return ((::FKFOIDMNDFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFOIDMNDFG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
