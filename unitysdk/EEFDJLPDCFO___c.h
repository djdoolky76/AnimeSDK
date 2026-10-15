#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFDJLPDCFO;
namespace System { class Object; }

#define EEFDJLPDCFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E239DC0)
#define EEFDJLPDCFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E239E00)
#define EEFDJLPDCFO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E239E10)

inline static constexpr unsigned int EEFDJLPDCFO___c_TypeDefinitionIndex = 28787;

	class EEFDJLPDCFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45240);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEFDJLPDCFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFDJLPDCFO___C_CTOR_OFFSET))(this);
		}

		::EEFDJLPDCFO* __cctor_b__33_0()
		{
			return ((::EEFDJLPDCFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEFDJLPDCFO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
