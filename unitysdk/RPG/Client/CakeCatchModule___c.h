#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeCatchPerformanceData; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CAKECATCHMODULE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC8E52C0)
#define RPG_CLIENT_CAKECATCHMODULE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC8E5300)
#define RPG_CLIENT_CAKECATCHMODULE___C__GETALLPERFORMANCEDATA_B__42_0_OFFSET UNITYSDK_OFFSET(0xC8E5310)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchModule___c_TypeDefinitionIndex = 62967;

	class CakeCatchModule___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68810);
		}

		static ::System::Comparison_1<::RPG::Client::CakeCatchPerformanceData*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::RPG::Client::CakeCatchPerformanceData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x68818);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPerformanceData_b__42_0(::RPG::Client::CakeCatchPerformanceData* a1, ::RPG::Client::CakeCatchPerformanceData* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::CakeCatchPerformanceData*, ::RPG::Client::CakeCatchPerformanceData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHMODULE___C__GETALLPERFORMANCEDATA_B__42_0_OFFSET))(this, a1, a2);
		}

	};
}
