#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }

#define DABEBEKCMNO_CTOR_OFFSET UNITYSDK_OFFSET(0xDFBAD80)
#define DABEBEKCMNO_IGICAMCPABK_OFFSET UNITYSDK_OFFSET(0xDFBABC0)

inline static constexpr unsigned int DABEBEKCMNO_TypeDefinitionIndex = 62295;

	class DABEBEKCMNO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABEBEKCMNO_CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* IGICAMCPABK(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + DABEBEKCMNO_IGICAMCPABK_OFFSET))(this, a1);
		}

	};
