#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FCLEMGPEMJJ_HGMMOGBFGGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156CDF10)
#define FCLEMGPEMJJ_HGMMOGBFGGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156CDF50)
#define FCLEMGPEMJJ_HGMMOGBFGGL___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x156CDF60)

	class FCLEMGPEMJJ_HGMMOGBFGGL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F830);
		}

		static ::System::Func_2<::CHGHIALKMFM*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5F838);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_HGMMOGBFGGL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_HGMMOGBFGGL___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Create_b__6_0(::CHGHIALKMFM* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CHGHIALKMFM*))((::PBYTE)hIl2Cpp + FCLEMGPEMJJ_HGMMOGBFGGL___C__CREATE_B__6_0_OFFSET))(this, a1);
		}

	};
