#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }

#define HKHDFAPDOGJ_ADONLKKFCEM_OFFSET UNITYSDK_OFFSET(0x15D37BB0)
#define HKHDFAPDOGJ_DDMFGANEIFN_OFFSET UNITYSDK_OFFSET(0x15D38210)
#define HKHDFAPDOGJ_NEHHFCMLODP_OFFSET UNITYSDK_OFFSET(0x15D38140)

inline static constexpr unsigned int HKHDFAPDOGJ_TypeDefinitionIndex = 66213;

	class HKHDFAPDOGJ : public ::System::Object
	{
	public:
		static ::System::Boolean ADONLKKFCEM(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + HKHDFAPDOGJ_ADONLKKFCEM_OFFSET))(a1, a2);
		}

		static ::System::Boolean NEHHFCMLODP(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + HKHDFAPDOGJ_NEHHFCMLODP_OFFSET))(a1, a2);
		}

		static ::System::Boolean DDMFGANEIFN(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Object*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HKHDFAPDOGJ_DDMFGANEIFN_OFFSET))(a1, a2, a3, a4);
		}

	};
