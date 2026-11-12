#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNDGNKPHLMP;
namespace System { class Object; }

#define FNDGNKPHLMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6D9890)
#define FNDGNKPHLMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6D98D0)
#define FNDGNKPHLMP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F6D98E0)

inline static constexpr unsigned int FNDGNKPHLMP___c_TypeDefinitionIndex = 25989;

	class FNDGNKPHLMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDGNKPHLMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP___C_CTOR_OFFSET))(this);
		}

		::FNDGNKPHLMP* __cctor_b__28_0()
		{
			return ((::FNDGNKPHLMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
