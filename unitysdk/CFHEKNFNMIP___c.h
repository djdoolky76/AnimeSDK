#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFHEKNFNMIP;
namespace System { class Object; }

#define CFHEKNFNMIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A3790)
#define CFHEKNFNMIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A37D0)
#define CFHEKNFNMIP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0A37E0)

inline static constexpr unsigned int CFHEKNFNMIP___c_TypeDefinitionIndex = 29451;

	class CFHEKNFNMIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x13060);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFHEKNFNMIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP___C_CTOR_OFFSET))(this);
		}

		::CFHEKNFNMIP* __cctor_b__23_0()
		{
			return ((::CFHEKNFNMIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFHEKNFNMIP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
