#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCPEJLBJCLO;
namespace System { class Object; }

#define NCPEJLBJCLO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2B20)
#define NCPEJLBJCLO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2B60)
#define NCPEJLBJCLO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EAE2B70)

inline static constexpr unsigned int NCPEJLBJCLO___c_TypeDefinitionIndex = 34195;

	class NCPEJLBJCLO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D3F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCPEJLBJCLO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO___C_CTOR_OFFSET))(this);
		}

		::NCPEJLBJCLO* __cctor_b__33_0()
		{
			return ((::NCPEJLBJCLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPEJLBJCLO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
