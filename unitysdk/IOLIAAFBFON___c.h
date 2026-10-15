#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class WaveSimPanel;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IOLIAAFBFON___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x16511FB0)
#define IOLIAAFBFON___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16511FF0)
#define IOLIAAFBFON___C__UPDATEVOLUME_B__161_0_OFFSET UNITYSDK_OFFSET(0x16512000)

	class IOLIAAFBFON___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CE00);
		}

		static ::System::Comparison_1<::WaveSimPanel*>** StaticGet___9__161_0()
		{
			return (::System::Comparison_1<::WaveSimPanel*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CE08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOLIAAFBFON___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOLIAAFBFON___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _UpdateVolume_b__161_0(::WaveSimPanel* a1, ::WaveSimPanel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::WaveSimPanel*, ::WaveSimPanel*))((::PBYTE)hIl2Cpp + IOLIAAFBFON___C__UPDATEVOLUME_B__161_0_OFFSET))(this, a1, a2);
		}

	};
