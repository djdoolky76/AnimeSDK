#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMNHOAGPGNI;
class NGPOJOFKFGI_GEOEFGOJLCF;
namespace System { class Object; }

#define NGPOJOFKFGI_GEOEFGOJLCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD52270)
#define NGPOJOFKFGI_GEOEFGOJLCF_HGFKHEEIEHO_OFFSET UNITYSDK_OFFSET(0x1DD52640)
#define NGPOJOFKFGI_GEOEFGOJLCF_JDDEPEEHLNE_OFFSET UNITYSDK_OFFSET(0x1DD52600)
#define NGPOJOFKFGI_GEOEFGOJLCF_LHHCNMMCAOG_OFFSET UNITYSDK_OFFSET(0x1DD52560)
#define NGPOJOFKFGI_GEOEFGOJLCF_PHACOHCMNOA_OFFSET UNITYSDK_OFFSET(0x1DD52280)

inline static constexpr unsigned int NGPOJOFKFGI_GEOEFGOJLCF_TypeDefinitionIndex = 6191;

	class NGPOJOFKFGI_GEOEFGOJLCF : public ::System::Object
	{
	public:
		::NGPOJOFKFGI_GEOEFGOJLCF* JCIBLIIKJEL; // 0x10
		::NGPOJOFKFGI_GEOEFGOJLCF* IEPHIACNJPC; // 0x18
		::System::Int32 KIGGGJGOIGD; // 0x20
		::System::Int32 GAFENHHEBPG; // 0x24
		::System::Int32 FCFKGLPCPOP; // 0x28
		::System::Int32 IJMIFGGPKEB; // 0x2C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_GEOEFGOJLCF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 JDDEPEEHLNE(::System::Int32 a1, ::AMNHOAGPGNI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::AMNHOAGPGNI*))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_GEOEFGOJLCF_JDDEPEEHLNE_OFFSET))(this, a1, a2);
		}

		::System::Void PHACOHCMNOA(::NGPOJOFKFGI_GEOEFGOJLCF* a1, ::NGPOJOFKFGI_GEOEFGOJLCF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NGPOJOFKFGI_GEOEFGOJLCF*, ::NGPOJOFKFGI_GEOEFGOJLCF*))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_GEOEFGOJLCF_PHACOHCMNOA_OFFSET))(this, a1, a2);
		}

		::System::Void HGFKHEEIEHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_GEOEFGOJLCF_HGFKHEEIEHO_OFFSET))(this);
		}

		::System::Void LHHCNMMCAOG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGPOJOFKFGI_GEOEFGOJLCF_LHHCNMMCAOG_OFFSET))(this, a1);
		}

	};
