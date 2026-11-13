#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLBAKKMGDLG;
namespace System { class Object; }

#define MLBAKKMGDLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F956780)
#define MLBAKKMGDLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9567C0)
#define MLBAKKMGDLG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F9567D0)

inline static constexpr unsigned int MLBAKKMGDLG___c_TypeDefinitionIndex = 29588;

	class MLBAKKMGDLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4BDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLBAKKMGDLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG___C_CTOR_OFFSET))(this);
		}

		::MLBAKKMGDLG* __cctor_b__33_0()
		{
			return ((::MLBAKKMGDLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLBAKKMGDLG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
