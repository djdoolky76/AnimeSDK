#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/WarmupQualitySet.h"
class DOFHJFBBGML_IGOIBNLMFLE;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DOFHJFBBGML___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x11FE0180)
#define DOFHJFBBGML___C_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE01C0)
#define DOFHJFBBGML___C__WARMUPPSOSONEBYONE_B__13_0_OFFSET UNITYSDK_OFFSET(0x11FE01D0)
#define DOFHJFBBGML___C__WARMUPPSOSONEBYONE_B__13_1_OFFSET UNITYSDK_OFFSET(0x11FE0300)
#define DOFHJFBBGML___C__WRITEWARMUPINFOS_B__23_0_OFFSET UNITYSDK_OFFSET(0x11FE0330)

inline static constexpr unsigned int DOFHJFBBGML___c_TypeDefinitionIndex = 47425;

	class DOFHJFBBGML___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F5A0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F5A8);
		}

		static ::System::Comparison_1<::WarmupQualitySet>** StaticGet___9__23_0()
		{
			return (::System::Comparison_1<::WarmupQualitySet>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F5B0);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__13_1()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F5B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOFHJFBBGML___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFHJFBBGML___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _WarmupPSOsOneByOne_b__13_0(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + DOFHJFBBGML___C__WARMUPPSOSONEBYONE_B__13_0_OFFSET))(this, a1);
		}

		::System::Int32 _WarmupPSOsOneByOne_b__13_1(::DOFHJFBBGML_IGOIBNLMFLE* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DOFHJFBBGML_IGOIBNLMFLE*))((::PBYTE)hIl2Cpp + DOFHJFBBGML___C__WARMUPPSOSONEBYONE_B__13_1_OFFSET))(this, a1);
		}

		::System::Int32 _WriteWarmupInfos_b__23_0(::WarmupQualitySet a1, ::WarmupQualitySet a2)
		{
			return ((::System::Int32(*)(::PVOID, ::WarmupQualitySet, ::WarmupQualitySet))((::PBYTE)hIl2Cpp + DOFHJFBBGML___C__WRITEWARMUPINFOS_B__23_0_OFFSET))(this, a1, a2);
		}

	};
