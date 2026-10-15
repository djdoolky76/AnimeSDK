#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace EnviromentSystemV2Space { class EnvProfileV2; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }

#define NPJKDMFBDFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD04A80)
#define NPJKDMFBDFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD04AB0)
#define NPJKDMFBDFG___C__INIT_B__40_0_OFFSET UNITYSDK_OFFSET(0xBD04AC0)

inline static constexpr unsigned int NPJKDMFBDFG___c_TypeDefinitionIndex = 49429;

	class NPJKDMFBDFG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9__40_0()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x542B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x542B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C_CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__40_0(::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::String*, ::EnviromentSystemV2Space::EnvProfileV2*>*))((::PBYTE)hIl2Cpp + NPJKDMFBDFG___C__INIT_B__40_0_OFFSET))(this, a1);
		}

	};
