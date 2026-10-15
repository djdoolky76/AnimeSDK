#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCGMMOEKHM;
namespace System { class Object; }

#define ALCGMMOEKHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A84E0)
#define ALCGMMOEKHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A8520)
#define ALCGMMOEKHM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3A8530)

inline static constexpr unsigned int ALCGMMOEKHM___c_TypeDefinitionIndex = 30434;

	class ALCGMMOEKHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCGMMOEKHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM___C_CTOR_OFFSET))(this);
		}

		::ALCGMMOEKHM* __cctor_b__18_0()
		{
			return ((::ALCGMMOEKHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCGMMOEKHM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
