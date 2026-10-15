#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEJMDKPGPGP;
namespace System { class Object; }

#define CEJMDKPGPGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E069CD0)
#define CEJMDKPGPGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E069D10)
#define CEJMDKPGPGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E069D20)

inline static constexpr unsigned int CEJMDKPGPGP___c_TypeDefinitionIndex = 27946;

	class CEJMDKPGPGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEJMDKPGPGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP___C_CTOR_OFFSET))(this);
		}

		::CEJMDKPGPGP* __cctor_b__33_0()
		{
			return ((::CEJMDKPGPGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJMDKPGPGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
