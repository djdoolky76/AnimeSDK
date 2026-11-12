#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ComicDessert/ComicDessertDeviceId.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define OLKIGNMJDMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC80C3E0)
#define OLKIGNMJDMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC80C420)
#define OLKIGNMJDMA___C___GETSELECTORDER_B__7_0_OFFSET UNITYSDK_OFFSET(0xC80C430)

inline static constexpr unsigned int OLKIGNMJDMA___c_TypeDefinitionIndex = 77087;

	class OLKIGNMJDMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x563F0);
		}

		static ::System::Comparison_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>** StaticGet___9__7_0()
		{
			return (::System::Comparison_1<::RPG::Client::ComicDessert::ComicDessertDeviceId>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x563F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLKIGNMJDMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKIGNMJDMA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __GetSelectOrder_b__7_0(::RPG::Client::ComicDessert::ComicDessertDeviceId a1, ::RPG::Client::ComicDessert::ComicDessertDeviceId a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + OLKIGNMJDMA___C___GETSELECTORDER_B__7_0_OFFSET))(this, a1, a2);
		}

	};
