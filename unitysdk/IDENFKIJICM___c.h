#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDENFKIJICM;
namespace System { class Object; }

#define IDENFKIJICM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E629FA0)
#define IDENFKIJICM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E629FE0)
#define IDENFKIJICM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E629FF0)

inline static constexpr unsigned int IDENFKIJICM___c_TypeDefinitionIndex = 30826;

	class IDENFKIJICM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IDENFKIJICM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM___C_CTOR_OFFSET))(this);
		}

		::IDENFKIJICM* __cctor_b__23_0()
		{
			return ((::IDENFKIJICM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IDENFKIJICM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
