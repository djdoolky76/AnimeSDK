#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoEffectPluginMahJongItem; }
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define CIIFBLMIPGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCF779F0)
#define CIIFBLMIPGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCF77A20)
#define CIIFBLMIPGP___C___CTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0xCF77A30)

inline static constexpr unsigned int CIIFBLMIPGP___c_TypeDefinitionIndex = 69862;

	class CIIFBLMIPGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EB20);
		}

		static ::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>** StaticGet___9__42_0()
		{
			return (::System::Comparison_1<::RPG::Client::MonoEffectPluginMahJongItem*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2EB28);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIIFBLMIPGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIIFBLMIPGP___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ctor_b__42_0(::RPG::Client::MonoEffectPluginMahJongItem* a1, ::RPG::Client::MonoEffectPluginMahJongItem* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MonoEffectPluginMahJongItem*, ::RPG::Client::MonoEffectPluginMahJongItem*))((::PBYTE)hIl2Cpp + CIIFBLMIPGP___C___CTOR_B__42_0_OFFSET))(this, a1, a2);
		}

	};
