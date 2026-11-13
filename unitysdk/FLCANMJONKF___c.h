#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightTraitLayerConfig; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define FLCANMJONKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x18958AB0)
#define FLCANMJONKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x18958AF0)
#define FLCANMJONKF___C__ISLAYERERROR_B__2_0_OFFSET UNITYSDK_OFFSET(0x18958B00)

inline static constexpr unsigned int FLCANMJONKF___c_TypeDefinitionIndex = 67358;

	class FLCANMJONKF___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightTraitLayerConfig*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A30);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68A38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLCANMJONKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCANMJONKF___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _IsLayerError_b__2_0(::RPG::Client::GridFightTraitLayerConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightTraitLayerConfig*))((::PBYTE)hIl2Cpp + FLCANMJONKF___C__ISLAYERERROR_B__2_0_OFFSET))(this, a1);
		}

	};
