#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHLGKKEIIEC;
namespace System { class Object; }

#define AHLGKKEIIEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5298E0)
#define AHLGKKEIIEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F529920)
#define AHLGKKEIIEC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F529930)

inline static constexpr unsigned int AHLGKKEIIEC___c_TypeDefinitionIndex = 34337;

	class AHLGKKEIIEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLGKKEIIEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC___C_CTOR_OFFSET))(this);
		}

		::AHLGKKEIIEC* __cctor_b__28_0()
		{
			return ((::AHLGKKEIIEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLGKKEIIEC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
