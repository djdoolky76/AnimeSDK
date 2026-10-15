#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJKFOJJDGGG;
namespace System { class Object; }

#define NJKFOJJDGGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB1E2F0)
#define NJKFOJJDGGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB1E330)
#define NJKFOJJDGGG___C___CCTOR_B__186_0_OFFSET UNITYSDK_OFFSET(0x1EB1E340)

inline static constexpr unsigned int NJKFOJJDGGG___c_TypeDefinitionIndex = 29255;

	class NJKFOJJDGGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C_CTOR_OFFSET))(this);
		}

		::NJKFOJJDGGG* __cctor_b__186_0()
		{
			return ((::NJKFOJJDGGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJKFOJJDGGG___C___CCTOR_B__186_0_OFFSET))(this);
		}

	};
