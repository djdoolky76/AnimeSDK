#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMAOECIJEBA;
namespace System { class Object; }

#define NMAOECIJEBA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6D970)
#define NMAOECIJEBA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6D9A0)
#define NMAOECIJEBA___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB6D9B0)

inline static constexpr unsigned int NMAOECIJEBA___c_TypeDefinitionIndex = 29030;

	class NMAOECIJEBA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BE10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMAOECIJEBA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA___C_CTOR_OFFSET))(this);
		}

		::NMAOECIJEBA* __cctor_b__43_0()
		{
			return ((::NMAOECIJEBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAOECIJEBA___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
