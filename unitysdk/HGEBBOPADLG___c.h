#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGEBBOPADLG;
namespace System { class Object; }

#define HGEBBOPADLG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E578880)
#define HGEBBOPADLG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5788C0)
#define HGEBBOPADLG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5788D0)

inline static constexpr unsigned int HGEBBOPADLG___c_TypeDefinitionIndex = 27646;

	class HGEBBOPADLG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGEBBOPADLG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG___C_CTOR_OFFSET))(this);
		}

		::HGEBBOPADLG* __cctor_b__33_0()
		{
			return ((::HGEBBOPADLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEBBOPADLG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
