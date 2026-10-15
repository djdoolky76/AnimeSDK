#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNFGJMLJDAK;
namespace System { class Object; }

#define BNFGJMLJDAK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E032B30)
#define BNFGJMLJDAK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E032B70)
#define BNFGJMLJDAK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E032B80)

inline static constexpr unsigned int BNFGJMLJDAK___c_TypeDefinitionIndex = 26130;

	class BNFGJMLJDAK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFGJMLJDAK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK___C_CTOR_OFFSET))(this);
		}

		::BNFGJMLJDAK* __cctor_b__23_0()
		{
			return ((::BNFGJMLJDAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFGJMLJDAK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
