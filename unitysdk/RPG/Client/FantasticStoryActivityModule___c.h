#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class FantasticStoryBuffData; }
namespace RPG::Client { class FantasticStoryBuffSlotData; }
namespace RPG::Client { class FantasticStoryChapterData; }
namespace RPG::Client { class FantasticStoryParagraphData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE6EB70)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCE6EBA0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSLOTBUFFDATA_B__37_0_OFFSET UNITYSDK_OFFSET(0xCE6EBF0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFDATA_B__35_0_OFFSET UNITYSDK_OFFSET(0xCE6EBD0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFSLOTDATA_B__36_0_OFFSET UNITYSDK_OFFSET(0xCE6EBE0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDCHAPTERDATA_B__33_0_OFFSET UNITYSDK_OFFSET(0xCE6EBB0)
#define RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDPARAGRAPHDATA_B__34_0_OFFSET UNITYSDK_OFFSET(0xCE6EBC0)

namespace RPG::Client
{
	inline static constexpr unsigned int FantasticStoryActivityModule___c_TypeDefinitionIndex = 63973;

	class FantasticStoryActivityModule___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::FantasticStoryBuffData*>** StaticGet___9__37_0()
		{
			return (::System::Comparison_1<::RPG::Client::FantasticStoryBuffData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F80);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F88);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F90);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57F98);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__33_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FA0);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x57FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetSortedChapterData_b__33_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDCHAPTERDATA_B__33_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedParagraphData_b__34_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDPARAGRAPHDATA_B__34_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffData_b__35_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFDATA_B__35_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedBuffSlotData_b__36_0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSORTEDBUFFSLOTDATA_B__36_0_OFFSET))(this, a1);
		}

		::System::Int32 _GetSlotBuffData_b__37_0(::RPG::Client::FantasticStoryBuffData* a1, ::RPG::Client::FantasticStoryBuffData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FantasticStoryBuffData*, ::RPG::Client::FantasticStoryBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FANTASTICSTORYACTIVITYMODULE___C__GETSLOTBUFFDATA_B__37_0_OFFSET))(this, a1, a2);
		}

	};
}
