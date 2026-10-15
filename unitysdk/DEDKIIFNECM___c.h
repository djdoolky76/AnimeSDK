#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEDKIIFNECM;
namespace System { class Object; }

#define DEDKIIFNECM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E191520)
#define DEDKIIFNECM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E191560)
#define DEDKIIFNECM___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E191570)

inline static constexpr unsigned int DEDKIIFNECM___c_TypeDefinitionIndex = 34973;

	class DEDKIIFNECM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30AA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEDKIIFNECM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM___C_CTOR_OFFSET))(this);
		}

		::DEDKIIFNECM* __cctor_b__43_0()
		{
			return ((::DEDKIIFNECM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEDKIIFNECM___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
