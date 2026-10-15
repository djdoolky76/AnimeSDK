#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPAHMLLDHJC;
namespace System { class Object; }

#define CPAHMLLDHJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E10D340)
#define CPAHMLLDHJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E10D380)
#define CPAHMLLDHJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E10D390)

inline static constexpr unsigned int CPAHMLLDHJC___c_TypeDefinitionIndex = 26126;

	class CPAHMLLDHJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EB80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPAHMLLDHJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC___C_CTOR_OFFSET))(this);
		}

		::CPAHMLLDHJC* __cctor_b__28_0()
		{
			return ((::CPAHMLLDHJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPAHMLLDHJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
