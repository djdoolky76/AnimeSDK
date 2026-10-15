#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EzySlice/Triangulator_Mapped2D.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define EZYSLICE_TRIANGULATOR___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF28580)
#define EZYSLICE_TRIANGULATOR___C_CTOR_OFFSET UNITYSDK_OFFSET(0xAF285C0)
#define EZYSLICE_TRIANGULATOR___C__MONOTONECHAIN_B__2_0_OFFSET UNITYSDK_OFFSET(0xAF285D0)

namespace EzySlice
{
	inline static constexpr unsigned int Triangulator___c_TypeDefinitionIndex = 47004;

	class Triangulator___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("EzySlice", "<>c")->GetStaticField(0x1C0A0);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("EzySlice", "<>c")->GetStaticField(0x1C0A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _MonotoneChain_b__2_0(::EzySlice::Triangulator_Mapped2D a1, ::EzySlice::Triangulator_Mapped2D a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EzySlice::Triangulator_Mapped2D, ::EzySlice::Triangulator_Mapped2D))((::PBYTE)hIl2Cpp + EZYSLICE_TRIANGULATOR___C__MONOTONECHAIN_B__2_0_OFFSET))(this, a1, a2);
		}

	};
}
