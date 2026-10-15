#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEIEEEFKLFA;
namespace System { class Object; }

#define IEIEEEFKLFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60D540)
#define IEIEEEFKLFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60D580)
#define IEIEEEFKLFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E60D590)

inline static constexpr unsigned int IEIEEEFKLFA___c_TypeDefinitionIndex = 31587;

	class IEIEEEFKLFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEIEEEFKLFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA___C_CTOR_OFFSET))(this);
		}

		::IEIEEEFKLFA* __cctor_b__33_0()
		{
			return ((::IEIEEEFKLFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEIEEEFKLFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
