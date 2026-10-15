#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGOLOIGOAMB;
namespace System { class Object; }

#define MGOLOIGOAMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B530)
#define MGOLOIGOAMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2B570)
#define MGOLOIGOAMB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA2B580)

inline static constexpr unsigned int MGOLOIGOAMB___c_TypeDefinitionIndex = 34771;

	class MGOLOIGOAMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGOLOIGOAMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB___C_CTOR_OFFSET))(this);
		}

		::MGOLOIGOAMB* __cctor_b__23_0()
		{
			return ((::MGOLOIGOAMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGOLOIGOAMB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
