#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAAJAPNFMGO;
namespace System { class Object; }

#define JAAJAPNFMGO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F21C0)
#define JAAJAPNFMGO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F2200)
#define JAAJAPNFMGO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F9F2210)

inline static constexpr unsigned int JAAJAPNFMGO___c_TypeDefinitionIndex = 27726;

	class JAAJAPNFMGO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A0B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JAAJAPNFMGO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO___C_CTOR_OFFSET))(this);
		}

		::JAAJAPNFMGO* __cctor_b__23_0()
		{
			return ((::JAAJAPNFMGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAAJAPNFMGO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
