#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHILENAKIPI;
namespace System { class Object; }

#define LHILENAKIPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC82A50)
#define LHILENAKIPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC82A80)
#define LHILENAKIPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FC82A90)

inline static constexpr unsigned int LHILENAKIPI___c_TypeDefinitionIndex = 31073;

	class LHILENAKIPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x347E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHILENAKIPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI___C_CTOR_OFFSET))(this);
		}

		::LHILENAKIPI* __cctor_b__23_0()
		{
			return ((::LHILENAKIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHILENAKIPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
