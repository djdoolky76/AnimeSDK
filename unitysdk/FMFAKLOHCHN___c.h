#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMFAKLOHCHN;
namespace System { class Object; }

#define FMFAKLOHCHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5710)
#define FMFAKLOHCHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B5750)
#define FMFAKLOHCHN___C___CCTOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1E3B5760)

inline static constexpr unsigned int FMFAKLOHCHN___c_TypeDefinitionIndex = 26222;

	class FMFAKLOHCHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CBD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C_CTOR_OFFSET))(this);
		}

		::FMFAKLOHCHN* __cctor_b__37_0()
		{
			return ((::FMFAKLOHCHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMFAKLOHCHN___C___CCTOR_B__37_0_OFFSET))(this);
		}

	};
