#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/F5AA718DA662D833.h"
#include "unitysdk/FC4DA67BAC954D61.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/F99B4EBBF0403D40.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace ABC::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace ABC::CustomRenderPipeline { class DecalVolume; }
namespace BDC595893C6EE433 { class EC81A325BE4ED2E9; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define E7D11034B48A14E6_A05D1D33DD3C30F4_OFFSET UNITYSDK_OFFSET(0x27CE4B0)
#define E7D11034B48A14E6_ADA0FFABBD250332_OFFSET UNITYSDK_OFFSET(0x27CEBB0)
#define E7D11034B48A14E6_BE51D48EB7D989B7_OFFSET UNITYSDK_OFFSET(0x27CEAA0)
#define E7D11034B48A14E6_EE541637F143F195_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E7D11034B48A14E6_F0D2AFBD3CAE7F65_OFFSET UNITYSDK_OFFSET(0x27D0750)
#define E7D11034B48A14E6_F568BC1E64844CEA_OFFSET UNITYSDK_OFFSET(0x27CE850)
#define E7D11034B48A14E6_FF0997C535275E60_OFFSET UNITYSDK_OFFSET(0x27D0480)
#define E7D11034B48A14E6_FFC8103231446CB5_OFFSET UNITYSDK_OFFSET(0x27CE5F0)
#define E7D11034B48A14E6__CTOR_OFFSET UNITYSDK_OFFSET(0x27D1280)

inline static constexpr unsigned int E7D11034B48A14E6_TypeDefinitionIndex = 16745;

class E7D11034B48A14E6 : public ::System::Object
{
public:
	::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::UnityEngine::Texture2DArray*>* FA6C82A537E93CE4; // 0x10
	::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::ABC::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Int32>*>* ED9F50E019F99915; // 0x18
	::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::ABC::Collections::Generic::SortedDictionary_2<::System::Int32, ::System::String*>*>* B77FEC8C25AC3E1F; // 0x20
	::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::ABC::Collections::Generic::SortedDictionary_2<::System::String*, ::System::Int32>*>* BA48E795071D720E; // 0x28
	::System::Collections::Generic::List_1<::F5AA718DA662D833>* E184AFDAC03DB602; // 0x30
	::UnityEngine::F99B4EBBF0403D40 E69ABBCA64957A1D; // 0x38
	::System::Int32 ABD5EFF7AB362B0A; // 0x3C
	::System::Int32 A2742908AA4BF9BD; // 0x40
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::Dictionary_2<::F5AA718DA662D833, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture2D*>*>* B08C7A6CA771D90D; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* BEB61F8D7CBD2C66; // 0x50
	::Il2CppArray<::System::Collections::Generic::List_1<::FC4DA67BAC954D61>*>* FBC3F4E72D8A2616; // 0x58
	::Il2CppArray<::System::Collections::Generic::List_1<::UnityEngine::ACF10FE87B4C5617>*>* A1AEDE72B2CC4DDF; // 0x60

	::System::Boolean A05D1D33DD3C30F4(::ABC::CustomRenderPipeline::DecalVolume* E4457EE9C30B28C5)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::CustomRenderPipeline::DecalVolume*))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_A05D1D33DD3C30F4_OFFSET))(this, E4457EE9C30B28C5);
	}

	::System::Boolean FFC8103231446CB5(::ABC::CustomRenderPipeline::DecalVolume* E4457EE9C30B28C5)
	{
		return ((::System::Boolean(*)(::PVOID, ::ABC::CustomRenderPipeline::DecalVolume*))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_FFC8103231446CB5_OFFSET))(this, E4457EE9C30B28C5);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7D11034B48A14E6__CTOR_OFFSET))(this);
	}

	::System::Void BE51D48EB7D989B7(::ABC::CustomRenderPipeline::DecalVolume* E4457EE9C30B28C5, ::System::Int32& AF7BE2E629EC5FBF, ::System::Int32& E15541350D23D2CB, ::System::Int32& F83C46157F6017EB)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::DecalVolume*, ::System::Int32&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_BE51D48EB7D989B7_OFFSET))(this, E4457EE9C30B28C5, AF7BE2E629EC5FBF, E15541350D23D2CB, F83C46157F6017EB);
	}

	::System::Void ADA0FFABBD250332(::BDC595893C6EE433::EC81A325BE4ED2E9* AF56F86C59FD37AD, ::System::Collections::Generic::List_1<::FC4DA67BAC954D61>* F3E8E58E34D5E910, ::UnityEngine::Vector3 B88DB6EF82A8FB3D)
	{
		return ((::System::Void(*)(::PVOID, ::BDC595893C6EE433::EC81A325BE4ED2E9*, ::System::Collections::Generic::List_1<::FC4DA67BAC954D61>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_ADA0FFABBD250332_OFFSET))(this, AF56F86C59FD37AD, F3E8E58E34D5E910, B88DB6EF82A8FB3D);
	}

	::System::Int32 F568BC1E64844CEA(::F5AA718DA662D833 E6CB7AEC080736D0, ::System::String* AE717FA1739A29E6, ::System::Boolean E19A6D70C29CAF2E)
	{
		return ((::System::Int32(*)(::PVOID, ::F5AA718DA662D833, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_F568BC1E64844CEA_OFFSET))(this, E6CB7AEC080736D0, AE717FA1739A29E6, E19A6D70C29CAF2E);
	}

	::System::Void FF0997C535275E60()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_FF0997C535275E60_OFFSET))(this);
	}

	::System::Void F0D2AFBD3CAE7F65()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_F0D2AFBD3CAE7F65_OFFSET))(this);
	}

	::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::UnityEngine::Texture2DArray*>* EE541637F143F195()
	{
		return ((::ABC::Collections::Generic::SortedDictionary_2<::F5AA718DA662D833, ::UnityEngine::Texture2DArray*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E7D11034B48A14E6_EE541637F143F195_OFFSET))(this);
	}
};
