#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BNKDEHGIJMH;
namespace System { class Object; }

#define BNKDEHGIJMH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2F89D0)
#define BNKDEHGIJMH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2F8A10)
#define BNKDEHGIJMH___C___CCTOR_B__40_0_OFFSET UNITYSDK_OFFSET(0x1F2F8A20)

inline static constexpr unsigned int BNKDEHGIJMH___c_TypeDefinitionIndex = 31630;

	class BNKDEHGIJMH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNKDEHGIJMH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKDEHGIJMH___C_CTOR_OFFSET))(this);
		}

		::BNKDEHGIJMH* __cctor_b__40_0()
		{
			return ((::BNKDEHGIJMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNKDEHGIJMH___C___CCTOR_B__40_0_OFFSET))(this);
		}

	};
