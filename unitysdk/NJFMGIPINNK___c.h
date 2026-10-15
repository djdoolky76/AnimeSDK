#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJFMGIPINNK;
namespace System { class Object; }

#define NJFMGIPINNK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D650)
#define NJFMGIPINNK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB3D690)
#define NJFMGIPINNK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB3D6A0)

	class NJFMGIPINNK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJFMGIPINNK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK___C_CTOR_OFFSET))(this);
		}

		::NJFMGIPINNK* __cctor_b__18_0()
		{
			return ((::NJFMGIPINNK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJFMGIPINNK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
