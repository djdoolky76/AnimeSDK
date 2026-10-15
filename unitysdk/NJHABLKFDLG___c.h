#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJHABLKFDLG;
namespace System { class Object; }

#define NJHABLKFDLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB11020)
#define NJHABLKFDLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB11050)
#define NJHABLKFDLG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB11060)

inline static constexpr unsigned int NJHABLKFDLG___c_TypeDefinitionIndex = 28146;

	class NJHABLKFDLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68950);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJHABLKFDLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG___C_CTOR_OFFSET))(this);
		}

		::NJHABLKFDLG* __cctor_b__18_0()
		{
			return ((::NJHABLKFDLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHABLKFDLG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
