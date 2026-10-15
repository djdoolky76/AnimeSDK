#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OFIAIIJCJMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE42680)
#define OFIAIIJCJMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBE426C0)
#define OFIAIIJCJMP___C___GETCHIMERAPOOLMAXRARITY_B__14_1_OFFSET UNITYSDK_OFFSET(0xBE426D0)
#define OFIAIIJCJMP___C___GETITEMPOOLMAXRARITY_B__15_1_OFFSET UNITYSDK_OFFSET(0xBE42730)

inline static constexpr unsigned int OFIAIIJCJMP___c_TypeDefinitionIndex = 63383;

	class OFIAIIJCJMP___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>** StaticGet___9__14_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelChimeraData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64760);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64768);
		}

		static ::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelItemData*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GetChimeraPoolMaxRarity_b__14_1(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C___GETCHIMERAPOOLMAXRARITY_B__14_1_OFFSET))(this, a1);
		}

		::System::UInt32 __GetItemPoolMaxRarity_b__15_1(::RPG::Client::ChimeraDuelItemData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelItemData*))((::PBYTE)hIl2Cpp + OFIAIIJCJMP___C___GETITEMPOOLMAXRARITY_B__15_1_OFFSET))(this, a1);
		}

	};
