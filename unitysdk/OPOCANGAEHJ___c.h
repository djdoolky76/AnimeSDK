#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPOCANGAEHJ;
namespace System { class Object; }

#define OPOCANGAEHJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2036D9C0)
#define OPOCANGAEHJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2036DA00)
#define OPOCANGAEHJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2036DA10)

inline static constexpr unsigned int OPOCANGAEHJ___c_TypeDefinitionIndex = 27742;

	class OPOCANGAEHJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2BA10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPOCANGAEHJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ___C_CTOR_OFFSET))(this);
		}

		::OPOCANGAEHJ* __cctor_b__28_0()
		{
			return ((::OPOCANGAEHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPOCANGAEHJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
