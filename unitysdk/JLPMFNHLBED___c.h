#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPMFNHLBED;
namespace System { class Object; }

#define JLPMFNHLBED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E759E20)
#define JLPMFNHLBED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E759E60)
#define JLPMFNHLBED___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E759E70)

inline static constexpr unsigned int JLPMFNHLBED___c_TypeDefinitionIndex = 30432;

	class JLPMFNHLBED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPMFNHLBED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPMFNHLBED___C_CTOR_OFFSET))(this);
		}

		::JLPMFNHLBED* __cctor_b__48_0()
		{
			return ((::JLPMFNHLBED*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPMFNHLBED___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
