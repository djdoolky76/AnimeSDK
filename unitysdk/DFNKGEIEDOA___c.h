#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNKGEIEDOA;
namespace System { class Object; }

#define DFNKGEIEDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A8E70)
#define DFNKGEIEDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A8EB0)
#define DFNKGEIEDOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E1A8EC0)

inline static constexpr unsigned int DFNKGEIEDOA___c_TypeDefinitionIndex = 31897;

	class DFNKGEIEDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C_CTOR_OFFSET))(this);
		}

		::DFNKGEIEDOA* __cctor_b__33_0()
		{
			return ((::DFNKGEIEDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
