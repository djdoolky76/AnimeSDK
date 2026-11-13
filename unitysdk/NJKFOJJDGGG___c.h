#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKFOJJDGGG;
namespace System { class Object; }

#define NJKFOJJDGGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA0DD20)
#define NJKFOJJDGGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA0DD60)
#define NJKFOJJDGGG___C___CCTOR_B__295_0_OFFSET UNITYSDK_OFFSET(0x1FA0DD70)

inline static constexpr unsigned int NJKFOJJDGGG___c_TypeDefinitionIndex = 29912;

	class NJKFOJJDGGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x67740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C_CTOR_OFFSET))(this);
		}

		::NJKFOJJDGGG* __cctor_b__295_0()
		{
			return ((::NJKFOJJDGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C___CCTOR_B__295_0_OFFSET))(this);
		}

	};
