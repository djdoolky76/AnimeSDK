#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHGHIALKMFM;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FCLEMGPEMJJ_HGMMOGBFGGL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x156C2570)
#define FCLEMGPEMJJ_HGMMOGBFGGL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x156C25B0)
#define FCLEMGPEMJJ_HGMMOGBFGGL___C__CREATE_B__6_0_OFFSET UNITYSDK_OFFSET(0x156C25C0)

inline static constexpr unsigned int FCLEMGPEMJJ_HGMMOGBFGGL___c_TypeDefinitionIndex = 79463;

	class FCLEMGPEMJJ_HGMMOGBFGGL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::CHGHIALKMFM*, ::System::Int32>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::CHGHIALKMFM*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55700);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55708);
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
