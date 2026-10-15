#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDBHIOHEHHC;
namespace System { class Object; }

#define DDBHIOHEHHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17B4D0)
#define DDBHIOHEHHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17B500)
#define DDBHIOHEHHC___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E17B510)

inline static constexpr unsigned int DDBHIOHEHHC___c_TypeDefinitionIndex = 28204;

	class DDBHIOHEHHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2D550);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDBHIOHEHHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHIOHEHHC___C_CTOR_OFFSET))(this);
		}

		::DDBHIOHEHHC* __cctor_b__33_0()
		{
			return ((::DDBHIOHEHHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHIOHEHHC___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
