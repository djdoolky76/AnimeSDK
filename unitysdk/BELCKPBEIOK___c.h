#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BELCKPBEIOK;
namespace System { class Object; }

#define BELCKPBEIOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA36EF0)
#define BELCKPBEIOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA36F30)
#define BELCKPBEIOK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA36F40)

inline static constexpr unsigned int BELCKPBEIOK___c_TypeDefinitionIndex = 27145;

	class BELCKPBEIOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BELCKPBEIOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK___C_CTOR_OFFSET))(this);
		}

		::BELCKPBEIOK* __cctor_b__28_0()
		{
			return ((::BELCKPBEIOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BELCKPBEIOK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
