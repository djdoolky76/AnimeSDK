#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGFNFLBFBPC;
namespace RPG::Client { class PunkLordHonor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

#define GOJJEKGGPMK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2A450)
#define GOJJEKGGPMK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2A490)
#define GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_0_OFFSET UNITYSDK_OFFSET(0x15B2A4A0)
#define GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_1_OFFSET UNITYSDK_OFFSET(0x15B2A4C0)
#define GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_2_OFFSET UNITYSDK_OFFSET(0x15B2A760)
#define GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_3_OFFSET UNITYSDK_OFFSET(0x15B2A780)
#define GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_4_OFFSET UNITYSDK_OFFSET(0x15B2A740)

inline static constexpr unsigned int GOJJEKGGPMK___c_TypeDefinitionIndex = 66761;

	class GOJJEKGGPMK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E7F0);
		}

		static ::System::Func_2<::BGFNFLBFBPC*, ::System::Int64>** StaticGet___9__0_4()
		{
			return (::System::Func_2<::BGFNFLBFBPC*, ::System::Int64>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E7F8);
		}

		static ::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::BGFNFLBFBPC*>*, ::BGFNFLBFBPC*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::System::Linq::IGrouping_2<::System::UInt32, ::BGFNFLBFBPC*>*, ::BGFNFLBFBPC*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E800);
		}

		static ::System::Func_2<::BGFNFLBFBPC*, ::System::UInt32>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::BGFNFLBFBPC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E808);
		}

		static ::System::Func_2<::RPG::Client::PunkLordHonor*, ::System::UInt32>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::RPG::Client::PunkLordHonor*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E810);
		}

		static ::System::Func_2<::BGFNFLBFBPC*, ::System::UInt32>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::BGFNFLBFBPC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6E818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GenerateHonorList_b__0_0(::BGFNFLBFBPC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::BGFNFLBFBPC*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_0_OFFSET))(this, a1);
		}

		::BGFNFLBFBPC* _GenerateHonorList_b__0_1(::System::Linq::IGrouping_2<::System::UInt32, ::BGFNFLBFBPC*>* a1)
		{
			return ((::BGFNFLBFBPC*(*)(::PVOID, ::System::Linq::IGrouping_2<::System::UInt32, ::BGFNFLBFBPC*>*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_1_OFFSET))(this, a1);
		}

		::System::Int64 _GenerateHonorList_b__0_4(::BGFNFLBFBPC* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::BGFNFLBFBPC*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_4_OFFSET))(this, a1);
		}

		::System::UInt32 _GenerateHonorList_b__0_2(::BGFNFLBFBPC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::BGFNFLBFBPC*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_2_OFFSET))(this, a1);
		}

		::System::UInt32 _GenerateHonorList_b__0_3(::RPG::Client::PunkLordHonor* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::PunkLordHonor*))((::PBYTE)hIl2Cpp + GOJJEKGGPMK___C__GENERATEHONORLIST_B__0_3_OFFSET))(this, a1);
		}

	};
