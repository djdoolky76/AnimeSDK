#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNDGNKPHLMP;
namespace System { class Object; }

#define FNDGNKPHLMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED7A0)
#define FNDGNKPHLMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED7E0)
#define FNDGNKPHLMP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E3ED7F0)

inline static constexpr unsigned int FNDGNKPHLMP___c_TypeDefinitionIndex = 25510;

	class FNDGNKPHLMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65140);
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
